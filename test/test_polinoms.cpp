#include "gtest.h"
#include "polinoms.h"

TEST(Polinom, can_create_monom)
{
	Monom m;

	ASSERT_NO_THROW(m.init(4, 15));
}

TEST(Polinom, can_create_monom_with_incorrect_degree)
{
	Monom m;

	ASSERT_ANY_THROW(m.init(4, -15));
}

TEST(Polinom, add_monom_with_equal_degree)
{
	Monom a, b, c;
	a.init(1, 234);
	b.init(2, 234);

	c.init(3, 234);

	EXPECT_EQ(a + b, c);
}

TEST(Polinom, can_not_add_monom_with_not_equal_degree)
{
	Monom a, b;

	a.init(2, 123);
	b.init(3, 234);

	ASSERT_ANY_THROW(a + b);
}

TEST(Polinom, correct_mult_monom)
{
	Monom a, b, c;

	a.init(2, 111);
	b.init(3, 222);
	c.init(6, 333);

	EXPECT_EQ(a * b, c);
}

TEST(Polinom, can_create_polinom)
{
	Polinom a;
	Monom m;

	m.init(2, 234);

	ASSERT_NO_THROW(a.init(m));
}

TEST(Polinom, can_not_creat_polinom_with_incorrect_degree)
{
	Polinom a;
	Monom m;

	m.coeff = 1;
	m.deg = 1234;

	ASSERT_ANY_THROW(a.init(m));
}

TEST(Polinom, add_polinom)
{
	Polinom a, b, c;
	Monom m, n, f;

	m.coeff = 1;
	m.deg = 111;
	m.coeff = 3;
	m.deg = 222;
	a.init(m);

	n.coeff = 2;
	n.deg = 111;
	n.coeff = 4;
	n.deg = 222;
	b.init(n);

	f.coeff = 3;
	f.deg = 111;
	f.coeff = 7;
	f.deg = 111;
	c.init(f);

	EXPECT_EQ(a + b, c);
}

TEST(Polinom, sub_polinom)
{
	Polinom a, b, c;
	Monom m, n, f;

	m.coeff = 7;
	m.deg = 111;
	m.coeff = 3;
	m.deg = 222;
	a.init(m);

	n.coeff = 5;
	n.deg = 111;
	n.coeff = 4;
	n.deg = 222;
	b.init(n);

	f.coeff = 2;
	f.deg = 111;
	f.coeff = -1;
	f.deg = 111;
	c.init(f);

	EXPECT_EQ(a - b, c);
}

TEST(Polinom, mult_polinom_on_const)
{
	Polinom a, b;
	Monom m, n;
	double q = 3;

	m.coeff = 1;
	m.deg = 111;
	m.coeff = 3;
	m.deg = 222;
	a.init(m);

	n.coeff = 3;
	n.deg = 222;
	n.coeff = 9;
	n.deg = 111;
	b.init(n);

	EXPECT_EQ(a * q, b);
}

TEST(Polinom, mult_polinom_on_polinom)
{
	Polinom a, b, c;
	Monom m, n, f;

	m.coeff = 8;
	m.deg = 40;
	m.coeff = 2;
	m.deg = 110;
	a.init(m);

	n.coeff = 4;
	n.deg = 10;
	n.coeff = 1;
	n.deg = 40;
	b.init(n);

	f.coeff = 32;
	f.deg = 50;
	f.coeff = 8;
	f.deg = 80;
	f.coeff = 8;
	f.deg = 120;
	f.coeff = 2;
	f.deg = 150;
	c.init(f);
}