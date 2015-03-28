#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/assert_is_list.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

#if BOOST_VMD_ASSERT_DATA
  
  BOOST_VMD_ASSERT_IS_LIST((tt,(5,(uu,BOOST_PP_NIL yy))))
  
#else

  typedef char BOOST_VMD_ASSERT_IS_LIST_ERROR[-1];
   
#endif

#endif

  return boost::report_errors();
  
  }
