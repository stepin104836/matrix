#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <head.h>
#define PROJECT_NAME    "Matrix calculator"



/* Prototypes for all the test functions */
 void test_add(int mat_a[3][3], int mat_b[3][3]);
void test_mul(int mat_a[3][3], int mat_b[3][3]);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  
  
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "ADDITION", test_add);
  CU_add_test(suite, "MULTIPLY", test_mul);
   
/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
	
	mat_a[1][1]={100};
	mat_b[1][1]={200};
	
	  CU_ASSERT(300 == add(mat_a[1][1], mat_b[1][1]);
  
 
}

void test_mul(void) {
	mat_a[1][1]={10};
	mat_b[1][1]={20};
	
  CU_ASSERT(200 == mul(mat_a[1][1], mat_b[1][1]);
  

}


