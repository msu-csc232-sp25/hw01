/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    task4_test.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Task 4 test fixture.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include <gtest/gtest.h>
#include "csc232_test_utils.h"

namespace csc232 {
    class Task4TestFixture : public CSC232BaseTestFixture {
    public:
        Task4TestFixture() = default;

        ~Task4TestFixture() override = default;

    protected:
        // Reusable objects for each unit test in this test fixture
    };

#if !TEST_TASK4
    TEST_F(Task4TestFixture, Bootstrap) {
        std::cerr << "Task 4 is not ready for evaluation; please toggle the TEST_TASK4 macro to TRUE\n";
        SUCCEED();
    }

#else
    // TODO: Add unit tests as needed for task 4
    TEST_F(Task4TestFixture, ItDeclaresRectangleDerivedClass) {
        EXPECT_TRUE(isClassDerivedFromBase("rectangle.h", "csc232", "Rectangle", "Shape"));
    }

    TEST_F(Task4TestFixture, ItDeclaresConstructorMemberFunction) {
        EXPECT_TRUE(isMethodDeclaredInClass("rectangle.h", "csc232", "Rectangle", "Rectangle"));
    }

    TEST_F(Task4TestFixture, ItDeclaresPerimeterMemberFunction) {
        EXPECT_TRUE(isMethodDeclaredInClass("rectangle.h", "csc232", "Rectangle", "perimeter"));
    }

    TEST_F(Task4TestFixture, ItDeclaresAreaMemberFunction) {
        EXPECT_TRUE(isMethodDeclaredInClass("rectangle.h", "csc232", "Rectangle", "area"));
    }

    TEST_F(Task4TestFixture, ItDeclaresGetLengthMemberFunction) {
        EXPECT_TRUE(isMethodDeclaredInClass("rectangle.h", "csc232", "Rectangle", "get_length"));
    }

    TEST_F(Task4TestFixture, ItDeclaresSetLengthMemberFunction) {
        EXPECT_TRUE(isMethodDeclaredInClass("rectangle.h", "csc232", "Rectangle", "set_length"));
    }

    TEST_F(Task4TestFixture, ItDeclaresGetWidthMemberFunction) {
        EXPECT_TRUE(isMethodDeclaredInClass("rectangle.h", "csc232", "Rectangle", "get_width"));
    }

    TEST_F(Task4TestFixture, ItDeclaresSetWidthMemberFunction) {
        EXPECT_TRUE(isMethodDeclaredInClass("rectangle.h", "csc232", "Rectangle", "set_width"));
    }

    TEST_F(Task4TestFixture, ItDeclaresIsSquareMemberFunction) {
        EXPECT_TRUE(isMethodDeclaredInClass("rectangle.h", "csc232", "Rectangle", "is_square"));
    }

#endif

} // end namespace csc232
