#include <iostream>
#include <memory>

int main()
{

  /**
   * std::unique_ptr<class> imaptr = std::make_unique<class>();
   * std::unique_ptr<class> imaptr();
   * // you cannot copy these!!!!!!!
   *
   * std::shared_ptr<class> e0 = std::make_shared<class>();
   * std::shared_ptr<class> e2 = e0; // This will increase the reference count;
   * std::weak_ptr<class> e4 = e0; // Does not increase the ref count. Good to
   * check if alive...
   *
   *
   * for(auto d:vector) // copies
   * for(auto &d:vector) // modify original
   * for(auto const &d:vector) // get originals with no modification
   * for(auto && ... ) // Still not sure yet
   *
   *
   * DON'T FORGET
   * mutex
   * lock_guard
   * condition_variable
   * atomic
   *
         *
   */

  // This is a shared pointer!
  // smartIntPointer.get() returns the stored pointer.
  std::shared_ptr<int> smartIntPointer = std::make_shared<int>(5);
  std::cout << "Hello, World! " << *(smartIntPointer.get()) << std::endl;

  // int a      = 3;
  // int aaa    = 3;
  // int aaaaaa = 5;

  if (true)
  {
    std::cout << "hello" << std::endl;
  }
  std::cout << "Operations check!" << std::endl;
}