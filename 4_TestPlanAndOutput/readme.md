# TEST PLAN

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  HR_01       | The User Inputs to Choose the pattern | User Input-> Choice |passed | passed |Requirement based |
|  HR_02       | Avaiability of Patterns as Memu | Pattern Memu List | Passed | Passed | Technical based |
|  HR_03       | Execution of Pattern with Given Input |  Passed | Passed | Passed | Boundary based |
|  HR_04       | Termination of Application when user wants to Quit |  Passed | Passed | Passed | Termination based |
< Size of the pattern should be greater than 0 >

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  LR_01       | A Welcome note to the user and reading the user input and vaildating them w.r.t code for Switch Condition | User Input-> Choice | Passed | Passed |Requirement based |
|  LR_02       | The Patterns list in the console after the welcome note the available patterns are | Pattern Memu List | Passed | Passed | Scenario based |
|  LR_03       | A Proper Execution of the selected pattern by the user & size of pattern with clean display in console | User Input-> Size of Pattern | Passed | Passed | Boundary based |
|  LR_04       | The Patterns listed in the memu has to be in the backend for the execution w.r.t given input as dynmaic code | Compilation | Passed | Passed | Process based |
|  LR_05       | Termiantion of the Application when user want to Quit As iteration of code is Infinity times | User Input-> Exit or Next Iteration |Passed | Passed | Termination based |