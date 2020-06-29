# Cilk

# Installation
Install gcc-7 and g++-7

# Compilation
`g++-7 fib.cpp -fcilkplus -lcilkrts`

# Execution
`CILK_NWORKERS=1 time ./a.out`
