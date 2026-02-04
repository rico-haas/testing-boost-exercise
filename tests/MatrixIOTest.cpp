#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "matrixIO.hpp"

BOOST_AUTO_TEST_SUITE(MatrixIoTests)

BOOST_AUTO_TEST_CASE(OpenData)
{
  Eigen::MatrixXd expected_matrix(3, 3);
  expected_matrix << 5, 3, 8,
      4, 6, 7,
      1, 1, 1;

  Eigen::MatrixXd actual_matrix = matrixIO::openData("open_data_test_matrix.csv", 3);
  BOOST_TEST(actual_matrix.isApprox(expected_matrix));
}

BOOST_AUTO_TEST_SUITE_END()
