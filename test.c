/*
 *
 *
 *
 *
 */

#include <CUnit.h>
#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main()
{
	
	CU_pSuite pSuite = NULL;

	/* Initialise le catalogue de tests */
	if(CUE_SUCCESS != CU_initialize_registry())
		return CU_get_error();

	/* Ajoute la suite au catalogue */
	pSuite = CU_add_suite("Suite_1", init_suite1, clean_suite1);
	if (NULL == psuite) {
		CU_cleanup_registry();
		return CU_get_error();
	}

	/* Ajoute les tests à la suite */
	if ((NULL == CU_add_test(pSuite, "test new_game()", test_new_game)) ||
		 (NULL == CU_add_test(pSuite, "test load_game()", test_load_game)) ||
		 (NULL == CU_add_test(pSuite, "test free_game()", test_free_game)) ||
		 (NULL == CU_add_test(pSuite, "test apply_moves()", test_apply_moves)) ||
		 (NULL == CU_add_test(pSuite, "test is_move_seq_valid()", test_is_move_seq_valid)) ||
		 (NULL == CU_add_test(pSuite, "test undo_moves()", test_undo_moves)) ||
		 (NULL == CU_add_test(pSuite, "test print_board()", test_print_board)))
	{
		CU_cleanup_registry();
		return CU_get_error();
	}
	
	/* Exécute les tests et affiche les erreurs */
	CU_basic_run_tests();
	CU_basic_show_failures(CU_get_failure_list());

	/* Libère les ressources utilisées par le catalogue */
	CU_cleanup_registry();

}

/*
 * Initialise les données nécessaires à l'exécution des tests
 */
int init_suite1(void)
{
	
	
	
}

/*
 * Libère les données utilisées dans l'exécution des tests
 */
int clean_suite1(void)
{
	
	
	
}

/*
 *
 */
void test_new_game(void)
{
	
	
	
}

/*
 *
 */
void test_load_game(void)
{
	
	
	
}

/*
 *
 */
void test_free_game(void)
{
	
	
	
}

/*
 *
 */
void test_apply_moves(void)
{
	
	
	
}

/*
 *
 */
void test_is_move_seq_valid(void)
{
	
	
	
}

/*
 *
 */
void test_undo_moves(void)
{
	
	
	
}

/*
 *
 */
void test_print_board(void)
{
	
	
	
} 
