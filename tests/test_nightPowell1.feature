Feature: Testing Night Powell tab 1
  
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