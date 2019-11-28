#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test vector class copy with stack variable")
{
	Vector<int> v(5);
	Vector<int> v2 = v;

	REQUIRE(v.Size() == v2.Size());
}

TEST_CASE("test vector class copy with heap(dynamic) variablees")
{
	Vector<int> v(5);
	Vector<int> v2 = v;
	v[1] = 5;

	REQUIRE(v[1] != v2[1]);

}

TEST_CASE("test vector class copy 2 instances of Vector")
{
	Vector<int> v(3);
	Vector<int> v2(2);
	v2 = v;
	v[1] = 1;

	REQUIRE(v[1] != v2[1]);
}

Vector<int> get_vector()
{
	Vector<int> v(3);
	return v;
}

TEST_CASE("test return vector by value")
{
	Vector<int> v(1);
	v = get_vector();

	REQUIRE(v.Size() == 3);
}

TEST_CASE("Test reserve function new allocation")
{
	Vector<int> v;
	REQUIRE(v.Capacity() == 0);

	v.Reserve(8);
	REQUIRE(v.Capacity() == 8);
}

TEST_CASE("Test resize funtion new size")
{
	Vector<int> v;
	REQUIRE(v.Capacity() == 0);
	v.Resize(10);

	REQUIRE(v.Capacity() == 10);
}

TEST_CASE("Test push back w default constructor")
{
	Vector<int> v;
	v.Push_Back(3);

	REQUIRE(v.Size() == 1);
	REQUIRE(v[0] == 3);
}