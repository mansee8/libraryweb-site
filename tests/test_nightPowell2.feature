Feature: Testing Night Powell tab 2
  
@javascript
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