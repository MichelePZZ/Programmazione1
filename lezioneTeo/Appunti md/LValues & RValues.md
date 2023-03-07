fonte: https://www.internalpointers.com/post/understanding-meaning-lvalues-and-rvalues-c

## Lvalues and rvalues: a friendly definition

First of all, let's keep our heads away from any formal definition. In C++ an _lvalue_ is something that points to a specific memory location. On the other hand, a _rvalue_ is something that doesn't point anywhere. In general, rvalues are temporary and short lived, while lvalues live a longer life since they exist as variables. It's also fun to think of lvalues as _containers_ and rvalues as _things contained in the containers_. Without a container, they would expire.