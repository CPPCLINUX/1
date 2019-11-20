#include <cppunit/TestCase.h>
#include <CppUnit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>

class CPlusTestCase : public CppUnit::TestCase
{
	CPPUNIT_TEST_SUITE(CPlusTestCase);
	CPPUNIT_TEST(test_input);
	CPPUNIT_TEST(test_map);
	CPPUNIT_TEST(test_file);
	CPPUNIT_TEST_SUITE_END();

public:
	CPlusTestCase();
	virtual ~CPlusTestCase();
	void test_input();
	void test_map();
	void test_file();

	static CppUnit::Test* GetSuite();
};