Feature: Book search
  In order to find modules on Drupal.org
  As a Drupal user
  I need to be able to use Drupal.org search
  
@javascript
  Scenario: 
    Given I go to "https://www.library.ucla.edu/user"
	When I fill in "edit-name" with "test_ce_basic"
	And I fill in "edit-pass" with "test_ce_basic"
	And I press "Log in"
	Then I should see "Skip to main content"
	
	
	
	
    