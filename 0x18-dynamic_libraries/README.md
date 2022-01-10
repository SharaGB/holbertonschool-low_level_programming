# <a href="url"><img src="https://user-images.githubusercontent.com/90220978/148830487-addae857-156c-4aa9-b1f6-94f67528f1ba.png" align="middle" width="120" height="120"></a> C - Dynamic Libraries

## General
<ul>
<li>What is a dynamic library, how does it work, how to create one, and how to use it</li>
<li>What is the environment variable <code>$LD_LIBRARY_PATH</code> and how to use it</li>
<li>What are the differences between static and shared libraries</li>
<li>Basic usage <code>nm</code>, <code>ldd</code>, <code>ldconfig</code></li>
</ul>

To create a dynamic library called liball.so from all the .c files in the current directory, use the following script:
```bash
gcc -Wall -Werror -Wextra -pedantic -fPIC *.c -shared -o liball.so
```
