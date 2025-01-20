/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    task2_test.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Task 2 test fixture.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include <gtest/gtest.h>
#include "csc232_test_utils.h"

namespace csc232 {
    class Task2TestFixture : public CSC232BaseTestFixture {
    public:
        Task2TestFixture() = default;

        ~Task2TestFixture() override = default;

    protected:
        // Reusable objects for each unit test in this test fixture
    };

#if !TEST_TASK2
    TEST_F(Task2TestFixture, Bootstrap) {
        std::cerr << "Task 2 is not ready for evaluation; please toggle the TEST_TASK2 macro to TRUE\n";
        SUCCEED(); // Just to keep spirits up out of the box ;-)
    }

#else
    // TODO: Add unit tests as needed for task 2
    TEST_F(Task2TestFixture, ItDeclaresCircleDerivedClass) {
        EXPECT_TRUE(isClassDerivedFromBase("circle.h", "csc232", "Circle", "Shape"));
    }

    TEST_F(Task2TestFixture, ItDeclaresConstructorMemberFunction) {
        EXPECT_TRUE(isMethodDeclaredInClass("circle.h", "csc232", "Circle", "Circle"));
    }

    TEST_F(Task2TestFixture, ItDeclaresPerimeterMemberFunction) {
        EXPECT_TRUE(isMethodDeclaredInClass("circle.h", "csc232", "Circle", "perimeter"));
    }

    TEST_F(Task2TestFixture, ItDeclaresAreaMemberFunction) {
        EXPECT_TRUE(isMethodDeclaredInClass("circle.h", "csc232", "Circle", "area"));
    }

    TEST_F(Task2TestFixture, ItDeclaresGetRadiusMemberFunction) {
        EXPECT_TRUE(isMethodDeclaredInClass("circle.h", "csc232", "Circle", "get_radius"));
    }

    TEST_F(Task2TestFixture, ItDeclaresSetRadiusMemberFunction) {
        EXPECT_TRUE(isMethodDeclaredInClass("circle.h", "csc232", "Circle", "set_radius"));
    }

    TEST_F(Task2TestFixture, ItDeclaresIsUnitCircleMemberFunction) {
        EXPECT_TRUE(isMethodDeclaredInClass("circle.h", "csc232", "Circle", "is_unit_circle"));
    }
#endif

} // end namespace csc232
