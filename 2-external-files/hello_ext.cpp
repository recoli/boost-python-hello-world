#include <greet.hpp>
#include <meet.hpp>
#include <boost/python.hpp>

BOOST_PYTHON_MODULE(hello_ext)
{
    using namespace boost::python;
    def("greet", greet);
	def("meet", meet);
}