<?php

use Behat\Behat\Context\ClosuredContextInterface,
    Behat\Behat\Context\TranslatedContextInterface,
    Behat\Behat\Context\BehatContext,
    Behat\Behat\Exception\PendingException;
use Behat\Gherkin\Node\PyStringNode,
    Behat\Gherkin\Node\TableNode;
use Behat\MinkExtension\Context\MinkContext;
//
// Require 3rd-party libraries here:
//
//   require_once 'PHPUnit/Autoload.php';
//   require_once 'PHPUnit/Framework/Assert/Functions.php';
//

/**
 * Features context.
 */
class FeatureContext extends MinkContext
{
    /**
     * Initializes context.
     * Every scenario gets it's own context object.
     *
     * @param array $parameters context parameters (set them up through behat.yml)
     */
    public function __construct(array $parameters)
    {
        // Initialize your context here
    }
	
	/**
 * @When /^I select the "([^"]*)" radio button$/
 */
public function iSelectTheRadioButton($labelText)
{
    // Find the label by its text, then use that to get the radio item's ID
    $radioId = null;
    $ctx = $this->getMainContext();

    /** @var $label NodeElement */
    foreach ($ctx->getSession()->getPage()->findAll('css', 'label') as $label) {
        if ($labelText === $label->getText()) {
            if ($label->hasAttribute('for')) {
                $radioId = $label->getAttribute('for');
                break;
            } else {
                throw new \Exception("Radio button's label needs the 'for' attribute to be set");
            }
        }
    }
    if (!$radioId) {
        throw new \InvalidArgumentException("Label '$labelText' not found.");
    }

    // Now use the ID to retrieve the button and click it
    /** @var NodeElement $radioButton */
    $radioButton = $ctx->getSession()->getPage()->find('css', "#$radioId");
    if (!$radioButton) {
        throw new \Exception("$labelText radio button not found.");
    }

    $ctx->fillField($radioId, $radioButton->getAttribute('value'));
}
	

//
// Place your definition and hook methods here:
//
//    /**
//     * @Given /^I have done something with "([^"]*)"$/
//     */
//    public function iHaveDoneSomethingWith($argument)
//    {
//        doSomethingWith($argument);
//    }
//
}
