#include <iostream>
/* iostream is just a file on your computer.
 * The line above simply "copies and pastes" it
 * into this file before compilation. */
/* NOTE: stuff inside the slash-star...
 * star-slash are ignored by the compiler. */
// NOTE: you can also write comments like this,
// with a slash-slash at the beginning of the line.
using std::cout;
/* the file iostream has a lot of named things
 * in it.  Rather than pulling in *all* the named
 * things from iostream, we choose what we want
 * with the 'using' directive. */

int main()
{
	/* NOTE: the 'int main() {...}' is where
	 * the program starts. */
	// cout << "hello world.";
	/* NOTE: the above has no new line at the end,
	 * leaving command prompt indented. */
	cout << "hello world.\n";
	/* NOTE: the "hello world" in quotes is a
	 * literal, not a variable.  (It isn't the
	 * name of a piece of memory like most
	 * things) */
	/* NOTE: the \n is an *escape sequence. */
	return 0;
}

/* TODO:
 * 1. make sure you can compile this on the command line.
 * 2. play with it a little.  make a change that doesn't
 *    compile and try to make sense out of the resulting
 *    error messages (maybe delete the semicolon from the end
 *    of the cout statement).
 * 3  try to streamline the process of editing, compiling,
 *    and testing your program.
 * 4. play with git.  see the tutorial.  be sure to get
 *    familiar with 'git diff' and 'git log -p'. */
