#if !defined(BOOST_VMD_DETAIL_AFTER_LIST_HPP)
#define BOOST_VMD_DETAIL_AFTER_LIST_HPP

#include <boost/vmd/generic/elem.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/elem_after.hpp>

#define BOOST_VMD_DETAIL_ELEM_AFTER_LIST(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_AFTER(BOOST_VMD_ELEM(elem,vseq,BOOST_VMD_PARSE_LIST,BOOST_VMD_RETURN_AFTER),BOOST_VMD_TYPE_LIST) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_LIST_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_AFTER_D(d,BOOST_VMD_ELEM_D(d,elem,vseq,BOOST_VMD_PARSE_LIST,BOOST_VMD_RETURN_AFTER),BOOST_VMD_TYPE_LIST) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_LIST_HPP */
