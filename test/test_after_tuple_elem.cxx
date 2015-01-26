#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/elem.hpp>
#include <boost/vmd/is_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/list/at.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define BOOST_VMD_REGISTER_ggh (ggh)
  
  #define ANIDENTIFIER ggh
  #define ANUMBER 249
  #define ASEQ (25)(26)(27)
  #define ATUPLE (0,1,2,3,((a,b))((c,d))((e))((f,g,h)))
  #define ATUPLE2 (10,11,12,13)
  #define ATUPLE3 (100,101,102,103)
  #define ATUPLE5 (200,201,202,203)
  #define ALIST (0,(1,(2,(3,BOOST_PP_NIL))))
  #define ANARRAY (3,(a,b,38))
  #define ANARRAY2 (5,(c,d,133,22,15))
  #define ASEQUENCE ANUMBER ALIST ATUPLE ANIDENTIFIER ANARRAY ASEQ
  #define ASEQUENCE2 ANIDENTIFIER ANARRAY2 ALIST ASEQ ATUPLE2
  #define ASEQUENCE3 ASEQ ANIDENTIFIER ATUPLE3 ALIST
  #define ASEQUENCE4
  #define ASEQUENCE5 ALIST ASEQ ATUPLE5 ANIDENTIFIER

  #define A_TUPLE_PLUS (mmf,34,^^,!) 456
  #define PLUS_ATUPLE yyt (j,ii%)
  #define JDATA ggh
  #define KDATA (a,b) name
  #define A_SEQ (25)(26)(27)
  
#if !BOOST_VMD_MSVC_V8  

  #define AN_EMPTY_TUPLE_PLUS () 83
  
#endif

  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_ELEM(2,ASEQUENCE,BOOST_VMD_RETURN_ONLY_AFTER,BOOST_VMD_TYPE_TUPLE)));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_ELEM(4,ASEQUENCE2,BOOST_VMD_RETURN_ONLY_AFTER,BOOST_VMD_TYPE_TUPLE)));
  BOOST_TEST_EQ(BOOST_PP_LIST_AT(BOOST_VMD_ELEM(2,ASEQUENCE3,BOOST_VMD_RETURN_ONLY_AFTER,BOOST_VMD_TYPE_TUPLE),3),3);
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_ELEM(0,ASEQUENCE4,BOOST_VMD_RETURN_ONLY_AFTER,BOOST_VMD_TYPE_TUPLE)));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_ELEM(2,ASEQUENCE5,BOOST_VMD_RETURN_ONLY_AFTER,BOOST_VMD_TYPE_TUPLE)));
  
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_ELEM(0,anything,BOOST_VMD_RETURN_ONLY_AFTER,BOOST_VMD_TYPE_TUPLE)));
  BOOST_TEST_EQ(BOOST_VMD_ELEM(0,A_TUPLE_PLUS,BOOST_VMD_RETURN_ONLY_AFTER,BOOST_VMD_TYPE_TUPLE),456);
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_ELEM(0,PLUS_ATUPLE,BOOST_VMD_RETURN_ONLY_AFTER,BOOST_VMD_TYPE_TUPLE)));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_ELEM(0,JDATA,BOOST_VMD_RETURN_ONLY_AFTER,BOOST_VMD_TYPE_TUPLE)));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_ELEM(0,KDATA,BOOST_VMD_RETURN_ONLY_AFTER,BOOST_VMD_TYPE_TUPLE)));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_ELEM(0,A_SEQ,BOOST_VMD_RETURN_ONLY_AFTER,BOOST_VMD_TYPE_TUPLE)));
  
#if !BOOST_VMD_MSVC_V8  

  BOOST_TEST_EQ(BOOST_VMD_ELEM(0,AN_EMPTY_TUPLE_PLUS,BOOST_VMD_RETURN_ONLY_AFTER,BOOST_VMD_TYPE_TUPLE),83);
  
#endif

#endif

  return boost::report_errors();
  
  }
