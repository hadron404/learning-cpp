cmake_minimum_required(VERSION 3.28)
project(learning_cpp)

set(CMAKE_CXX_STANDARD 17)


add_executable(
        learning_cpp
#        main.cpp
#        how-to-think-like-a-computer-scientist-cpp/variables-and-types/outputting-variables.cpp
#        how-to-think-like-a-computer-scientist-cpp/function/math-function.cpp
#        how-to-think-like-a-computer-scientist-cpp/function/adding-new-function.cpp
#        how-to-think-like-a-computer-scientist-cpp/function/functions-with-result.cpp
#        how-to-think-like-a-computer-scientist-cpp/recursion/infinite-recursion.cpp
#        how-to-think-like-a-computer-scientist-cpp/fruitful-functions/incremental-development.cpp
#        how-to-think-like-a-computer-scientist-cpp/fruitful-functions/overloading.cpp
#        how-to-think-like-a-computer-scientist-cpp/fruitful-functions/bool.cpp
#        how-to-think-like-a-computer-scientist-cpp/fruitful-functions/leap-of-faith.cpp
#        how-to-think-like-a-computer-scientist-cpp/iteration/multiple-assignment.cpp
#        how-to-think-like-a-computer-scientist-cpp/iteration/iteration.cpp
#        how-to-think-like-a-computer-scientist-cpp/iteration/encapsulation-and-generalization.cpp
#        how-to-think-like-a-computer-scientist-cpp/iteration/functions.cpp
#        how-to-think-like-a-computer-scientist-cpp/iteration/development-plan.cpp
#        how-to-think-like-a-computer-scientist-cpp/strings/apstring.cpp
#        how-to-think-like-a-computer-scientist-cpp/structures/point.cpp
#        how-to-think-like-a-computer-scientist-cpp/structures/rectangle.cpp
        how-to-think-like-a-computer-scientist-cpp/structures/function.cpp
#        how-to-think-like-a-computer-scientist-cpp/structures/algorithms.cpp
#        how-to-think-like-a-computer-scientist-cpp/vectors/vector.cpp
        how-to-think-like-a-computer-scientist-cpp/vectors/random-numbers.cpp
        how-to-think-like-a-computer-scientist-cpp/member-function/member-function.cpp
        how-to-think-like-a-computer-scientist-cpp/member-function/constructors.cpp
        how-to-think-like-a-computer-scientist-cpp/member-function/header-files.h
        how-to-think-like-a-computer-scientist-cpp/vectors-of-objects/Card.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/sort-algorithms/0-bubble-sort.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/sort-algorithms/1-selection-sort.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/data-structures/0-array.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/data-structures/1-set.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/search-algorithms/0-linear-search.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/search-algorithms/1-binary-search.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/sort-algorithms/2-insertion-sort.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/practical-examples/0-print-out-all-the-items-from-the-list.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/practical-examples/1-every-other.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/practical-examples/3-intersection.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/data-structures/3-hash-tables.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/practical-examples/2-hasDuplicateValue.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/data-structures/8-stack.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/data-structures/8-queue.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/practical-examples/8-Javascript-linter.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/practical-examples/8-print-manager.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/practical-examples/9-count-down.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/practical-examples/9-factorial.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/practical-examples/9-traversing-through-a-filesystem.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/sort-algorithms/10-quick-sort.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/sort-algorithms/10-quick-select.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/data-structures/11-linked-list.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/data-structures/11-doubly-linked-list.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/data-structures/12-binary-tree.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/practical-examples/12-maintain-a-list-of-book-list.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/search-algorithms/13-breadth-first-search.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/search-algorithms/13-depth-first-search.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/practical-examples/13-display-network.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/data-structures/13-graph.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/data-structures/13-weighted-graph.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/practical-examples/13-shortest-path-problem.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/practical-examples/4-quadratic-problem.cpp
        a-common-sense-guide-to-data-structures-and-algorithms/13-dijkstra's-alogrithm.cpp
)
