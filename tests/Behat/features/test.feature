Feature: Book search
  In order to find modules on Drupal.org
  As a Drupal user
  I need to be able to use Drupal.org search
  
@javascript
  Scenario: 
    Given I go to "http://library.ucla.edu/"
    And I fill in "Site Search" with "books"
	And I press "Search"
	And I press "Search"
	
    