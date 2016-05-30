#define CTEST_MAIN

#include <stdio.h>
#include "ctest.h"
#include "proc.h"

CTEST(solution_suite, tworoots) {
	// Given
	const float a = 1;
	const float b = 3;
	const float c = 2;
        float x0;
        float x1;
	// When
        float solution = sq_equation_glob (a, b, c, &x0, &x1);

	// Then
	const float expected_solution = 2;
	ASSERT_DBL_NEAR(expected_solution, solution);
}

CTEST(solution_suite, oneroot) {
        // Given
        const float a = 1;
        const float b = 2;
        const float c = 1;
        float x0;
        float x1;
        // When
        float solution = sq_equation_glob (a, b, c, &x0, &x1);

        // Then
        const float expected_solution = 1;
        ASSERT_DBL_NEAR(expected_solution, solution);
}

CTEST(solution_suite, noroots) {
        // Given
        const float a = 1;
        const float b = 1;
        const float c = 1;
        float x0;
        float x1;
        // When
        float solution = sq_equation_glob (a, b, c, &x0, &x1);

        // Then
        const float expected_solution = 0;
        ASSERT_DBL_NEAR(expected_solution, solution);
}

int main(int argc, const char** argv) {
        return ctest_main(argc, argv);
}

