/*
 * Test for the bic calculater
 */
#include "read_file.h"
#include "bic.h"
#include "assert.h"
#include "tree.h"
#include <stdio.h>
#include <stdlib.h>



/*
 * Test the result for the bic calculator.
 */
int main(int argc, char** argv) {
  char** samples = read_lines(argv[1]);
  double c = strtod(argv[2], NULL);
  Tree_node prob_root = Tree_create(PROB);
  Tree_node bic_root = Tree_create(BIC);

  setup_BIC(samples, 5, prob_root, bic_root);
  print_tree(prob_root, 5);

  
  Tau tao = calculate_BIC(c, bic_root);
  print_tree(bic_root, 5);

  pprint_Tau(tao);
  
}
