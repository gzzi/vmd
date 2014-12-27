#if !defined(BOOST_VMD_DETAIL_AFTER_SEQ_HPP)
#define BOOST_VMD_DETAIL_AFTER_SEQ_HPP

#include <boost/vmd/generic/elem.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/elem_after.hpp>

#define BOOST_VMD_DETAIL_ELEM_AFTER_SEQ(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_AFTER(BOOST_VMD_ELEM(elem,vseq,BOOST_VMD_PARSE_ONLY_TUPLE,BOOST_VMD_RETURN_AFTER),BOOST_VMD_TYPE_SEQ) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_SEQ_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_AFTER_D(d,BOOST_VMD_ELEM_D(d,elem,vseq,BOOST_VMD_PARSE_ONLY_TUPLE,BOOST_VMD_RETURN_AFTER),BOOST_VMD_TYPE_SEQ) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_SEQ_HPP */
