/* Time-stamp: <2013/05/04 22:15:17 hutzpa [hutzpa] am> */
#ifndef CHAMPION_SET_H_
#define CHAMPION_SET_H_


typedef struct champion_item *Champion_item;

/*
 * This is the structure that holds the champion set. Each item has its Tau and a pointer to the next item.
 */
struct champion_item {
  Tau tau;
  Champion_item next;
};

/*
 * Method that return the champion tree set.
 * Assumes that the BIC calculator has already been set up.
 */
Champion_item champion_set(Tree_node bic_tree, double max_c, double epsilon);

#endif /* CHAMPION_SET_H_ */
