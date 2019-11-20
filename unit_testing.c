#include "stdafx.h"
#include "UnitTest.h"
#include "PlusTestCase.h"
//#include <cppunit/TestAssert.h>
#include "text_instantiation.h"
#include <cppunit/extensions/TestFactoryRegistry.h>

CPPUNIT_TEST_SUITE_NAMED_REGISTRATION(CPlusTestCase, "CPlusTestSuit");

CppUnit::Test* CPlusTestCase::GetSuite()
{
	CppUnit::TestFactoryRegistry& reg = CppUnit::TestFactoryRegistry::getRegistry("CPlusTestSuit");
	return reg.makeTest();
}

void CPlusTestCase::test_input()
{
	cplus plus; 
	CPPUNIT_ASSERT(plus.test_input());
}

void CPlusTestCase::test_map()
{
	cplus plus;
	CPPUNIT_ASSERT(plus.test_map());
}

void CPlusTestCase::test_file()
{
	cplus plus;
	CPPUNIT_ASSERT(plus.test_file());
}