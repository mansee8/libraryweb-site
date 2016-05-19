Feature: Testing Article Plus tab
  
@javascript
  Scenario: Find Night Powell hours on the library website-Part A
  Given I go to "https://www.library.ucla.edu"
  And wait 3 second
  And I follow "Powell Library"
  And wait 3 second
  Then I should see "Powell Library"
  And wait 3 second
  And I follow "Night Powell"
  And wait 3 second
  Then I should see "Night Powell"
  And wait 3 second
 




  Scenario: Find Night Powell hours on the library website- Part B
  Given I go to "https://www.library.ucla.edu"
  And wait 3 second
  And I follow "Powell Library"
  And wait 3 second
  Then I should see "Powell Library"
  And wait 3 second
  And I follow "At This Location"
  And wait 3 second
  Then I should see "At This Location"
  And wait 3 second
  




 Scenario: Find Night Powell hours on the library website- Part C
  Given I go to "https://www.library.ucla.edu"
  And wait 3 second
  And I fill in "Site Search" with "night-powell"
  And wait 3 second
  And I click the "#submit" button
  Then I should see "Night Powell"
  And wait 3 second
  And I follow "Night Powell"
  And wait 3 second
  Then I should see "Night Powell"
  And wait 3 second
  

  
  
 
 
 
  
  