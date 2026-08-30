# Project 0

- Name: Mev Causevic
- Email: mevludincausevic@u.boisestate.edu
- Class: CS425-001

## Known Bugs or Issues

There are three intentional bugs in this project:
1. The lab.c has a memory leak in the get_product function
2. The main.c has a null pointer dereference
3. The main.c has a memory leak

## Experience

I haven't touched C in a while so it was kind of difficult to make a null pointer deref. But after figuring it out it was pretty simple. The compiler fixed my bug because i never used the variable ptr, which caused it to optimize it out. That was a fun lesson in compiler optimizations. The volatile keyword prevented that from happening because it tells the compiler that the value can change at any time, so it can't optimize it out. In order to create a memleak the first time I tried removing the free from main.c but the snprintf seems to stop any leak being reported, I am completely unsure why.
