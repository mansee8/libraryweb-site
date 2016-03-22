Feature: Testing Article Plus tab
  
@javascript
  Scenario: 
    Given I go to "https://www-test.library.ucla.edu/"
    And I follow "ArticlesPlus"
	And wait 3 second
	And I fill in "Search several databases at once." with "books"
	And wait 3 second
	And I click the "#edit-articlesplus-articlesplus-search" button
	And wait 3 second
	Then I should see "books"
	Then I press the "back" button in the browser
	Then I should see "ArticlesPlus"
	