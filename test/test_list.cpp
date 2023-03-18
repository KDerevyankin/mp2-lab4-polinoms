#include "gtest.h"
#include "list.h"

TEST(List, can_create_list)
{
	ASSERT_NO_THROW(List<int> l);
}

TEST(List, can_insert_element)
{
	List<int> l;
	ASSERT_NO_THROW(l.Insert(7));
}

TEST(List, can_delete_element)
{
	List <int> test1;
	List <int> test2;
	test1.Insert(1);
	test1.Insert(3);
	test2.Insert(1);
	test2.Insert(2);
	test2.Insert(3);
	test2.Delete(2);
	ASSERT_NO_THROW(test1, test2);
}

TEST(List, can_sort)
{
	List<int> l;
	List<int> k;
	l.Insert(7);
	l.Insert(3);
}