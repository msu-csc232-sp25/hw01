/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    task1_test.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Task 1 test fixture.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include <gtest/gtest.h>
#include "csc232_test_utils.h"

namespace csc232 {
    static const double EXPECTED_PERIMETER{42};
    static const double EXPECTED_AREA{420};

    class Task1TestFixture : public CSC232BaseTestFixture {
    public:
        Task1TestFixture() = default;

        ~Task1TestFixture() override = default;

    protected:
        // Reusable objects for each unit test in this test fixture
    };

#if !TEST_TASK1
    TEST_F(Task1TestFixture, Bootstrap) {
        std::cerr << "Task 1 is not ready for evaluation; please toggle the TEST_TASK1 macro to TRUE\n";
        SUCCEED(); // Just to keep spirits up out of the box ;-)
    }

#else
    TEST_F(Task1TestFixture, ItDeclaresShapeBaseClass) {
        EXPECT_TRUE(isClassInNamespaceDeclared("shape.h", "csc232", "Shape"));
    }

    TEST_F(Task1TestFixture, ItDeclaresPerimeterMethod) {
        EXPECT_TRUE(isMethodDeclaredInClass("shape.h", "csc232", "Shape", "perimeter"));
    }

    TEST_F(Task1TestFixture, ItDeclaresAreaMethod) {
        EXPECT_TRUE(isMethodDeclaredInClass("shape.h", "csc232", "Shape", "area"));
    }
#endif

} // end namespace csc232
