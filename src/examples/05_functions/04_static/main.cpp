#include "static.h"

int main()
{
    use_non_static_variable();
    use_non_static_variable();
    use_non_static_variable();

    use_static_variable();
    use_static_variable();
    use_static_variable();

    use_static_variable_1();

    return 0;
}