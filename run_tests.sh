#!/bin/bash
# Test Runner for ITP C++ Course

echo "Running tests..."
echo ""

# Test Week 1 programs
echo "=== Week 1 Tests ==="
cd week-01-introduction/01-hello-world
g++ hello_world.cpp -o hello
./hello
cd ../../

echo ""
echo "=== Week 2 Tests ==="
cd week-02-variables-control-flow/exercises
g++ triangle_type.cpp -o triangle_test
echo "Testing with sides 3,3,3:"
echo "3 3 3" | ./triangle_test
cd ../../

echo ""
echo "=== All tests completed ==="
