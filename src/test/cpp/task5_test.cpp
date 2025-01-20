/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    task5_test.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Task 5 test fixture.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include <gtest/gtest.h>
#include "csc232_test_utils.h"
#include "rectangle.h"

namespace csc232 {
    class Task5TestFixture : public CSC232BaseTestFixture {
    public:
        Task5TestFixture() = default;

        ~Task5TestFixture() override = default;

    protected:
        // Reusable objects for each unit test in this test fixture
    };

#if !TEST_TASK5
    TEST_F(Task5TestFixture, Bootstrap) {
        std::cerr << "Task 5 is not ready for evaluation; please toggle the TEST_TASK5 macro to TRUE\n";
        SUCCEED();
    }

#else
    // TODO: Add unit tests as needed for task 5
    TEST_F(Task5TestFixture, ItCanDeclareCircles) {
        Shape *pRectangle = new Rectangle;
        EXPECT_TRUE(dynamic_cast<Rectangle *>(pRectangle));
        delete pRectangle;
    }

    TEST_F(Task5TestFixture, ItCreatesATwoByFourByDefault) {
        auto *rectangle{new Rectangle{}};
        double expected_length{4.0};
        double expected_width{2.0};
        double actual_length{rectangle->get_length()};
        double actual_width{rectangle->get_width()};
        EXPECT_DOUBLE_EQ(expected_length, actual_length);
        EXPECT_DOUBLE_EQ(expected_width, actual_width);
        delete rectangle;
    }

    TEST_F(Task5TestFixture, ItCreatesRectWithInitializedLengthAndDefaultWidth) {
        double expected_width{2};
        double expected_length{6};
        auto *rectangle{new Rectangle{expected_length}};
        double actual_length{rectangle->get_length()};
        double actual_width{rectangle->get_width()};
        EXPECT_DOUBLE_EQ(expected_length, actual_length);
        EXPECT_DOUBLE_EQ(expected_width, actual_width);
        delete rectangle;
    }

    TEST_F(Task5TestFixture, ItCreatesRectWithInitializedLengthAndWidth) {
        double expected_width{12};
        double expected_length{24};
        auto *rectangle{new Rectangle{expected_length, expected_width}};
        double actual_length{rectangle->get_length()};
        double actual_width{rectangle->get_width()};
        EXPECT_DOUBLE_EQ(expected_length, actual_length);
        EXPECT_DOUBLE_EQ(expected_width, actual_width);
        delete rectangle;
    }

    TEST_F(Task5TestFixture, ItCanGetTheLength) {
        auto *rectangle{new Rectangle{}};
        auto expected{4.0};
        auto actual{rectangle->get_length()};
        EXPECT_DOUBLE_EQ(expected, actual);
        delete rectangle;
    }

    TEST_F(Task5TestFixture, ItCanChangeTheLength) {
        auto *rectangle{new Rectangle{}};
        auto expected{12.0};
        rectangle->set_length(expected);
        auto actual{rectangle->get_length()};
        EXPECT_DOUBLE_EQ(expected, actual);
        delete rectangle;
    }

    TEST_F(Task5TestFixture, ItCanGetTheWidth) {
        auto *rectangle{new Rectangle{}};
        auto expected{2.0};
        auto actual{rectangle->get_width()};
        EXPECT_DOUBLE_EQ(expected, actual);
        delete rectangle;
    }

    TEST_F(Task5TestFixture, ItCanChangeTheWidth) {
        auto *rectangle{new Rectangle{}};
        auto expected{12.0};
        rectangle->set_width(expected);
        auto actual{rectangle->get_width()};
        EXPECT_DOUBLE_EQ(expected, actual);
        delete rectangle;
    }

    TEST_F(Task5TestFixture, ItKnowsRectangleNotASquare) {
        auto *rectangle{new Rectangle{}}; // Default is 4x2
        EXPECT_FALSE(rectangle->is_square());
        delete rectangle;
    }

    TEST_F(Task5TestFixture, ItKnowsSquareIsSquare) {
        auto *rectangle{new Rectangle{1.0, 1.0}};
        EXPECT_TRUE(rectangle->is_square());
        delete rectangle;
    }

#endif

} // end namespace csc232
