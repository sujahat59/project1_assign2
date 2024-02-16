// RectangleAppTests.cpp

#include "pch.h"
#include "CppUnitTest.h"
#include "RectangleFunctions.h"  
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleAppTests
{
    TEST_CLASS(RectangleFunctionsTests)
    {
    public:
        TEST_METHOD(TestMethod_GetPerimeter_ValidInput)
        {
            // Arrange
            int length = 5;
            int width = 10;

            // Act
            int result = getPerimeter(&length, &width);

            // Assert
            Assert::AreEqual(30, result);
        }

        TEST_METHOD(TestMethod_GetArea_ValidInput)
        {
            // Arrange
            int length = 5;
            int width = 10;

            // Act
            int result = getArea(&length, &width);

            // Assert
            Assert::AreEqual(50, result);
        }

        TEST_METHOD(TestMethod_SetLength_UsualInput)
        {
            // Arrange
            int length = 5;

            // Act
            setLength(10, &length);

            // Assert
            Assert::AreEqual(10, length);
        }

        TEST_METHOD(TestMethod_SetWidth_SpecialInput)
        {
            // Arrange
            int width = 20;

            // Act
            setWidth(99, &width);

            // Assert
            Assert::AreEqual(99, width);
        }

      
    };
}
