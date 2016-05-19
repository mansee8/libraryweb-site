Feature: Testing Article Plus tab
  
@javascript
  Scenario: 
    Given I go to "https://www-test.library.ucla.edu/"
    And I follow "ArticlesPlus"
	And wait 3 second
	
	And I fill in "Search several databases at once." with "b"
	And wait 1 second
	And I wait for the suggestion box to appear
	Then I should see "books"
	
	And I click the "#edit-articlesplus-articlesplus-search" button
	And wait 3 second
	Then I should see "books"
	Then I press the "back" button in the browser
	Then I should see "ArticlesPlus"
	
	
	
	
	And I follow "Books & More"
	And wait 3 second
	And I fill in "Find books, journals and more." with "books"
	And wait 3 second
	And I press "Search"
	And wait 3 second
	Then I press the "back" button in the browser
	
	
	And I follow "Databases"
	And wait 3 second
	And I fill in "Search for a database." with "books"
	And wait 3 second
	And I click the "#edit-databases-databases-search" button
	Then I should see "DATABASES"
	

	
	
	
	
	
	
	

	

	
	
	
	