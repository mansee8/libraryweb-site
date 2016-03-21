Feature: Book search with radio buttons
  In order to find modules on Drupal.org
  As a Drupal user
  I need to be able to use Drupal.org search
  Scenario:
    Given I go to "http://library.ucla.edu/"
    And I fill in "Site Search" with "books"
    And I select the "Melvyl UC Catalog (+selected articles)" radio button
    And I press "Search"
    Then I should see ""