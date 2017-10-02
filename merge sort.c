#include "sorter.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

extern record * movies; 

void mergeSort (record * movies, int target_col, int low, int counter) { 
	if (counter < 2) { //In the case that there are only 2 movies that exist in the record
		return; 
	}

	if (low < high) { 
		int mid = (low + counter)/2; 

		record * left = (record*) malloc(mid * sizeof(record));
		record * right = (record*) malloc (counter-mid * sizeof(record));

		/* Copy all items from movies into left and right subarrays */ 
		int i; 

		for (i = 0; i < mid; i++) { 
			left[i] = movies[i];
		}
		for (i = mid; i < counter; i++) { 
			right[i - mid] = movies[i];
		}

	}
	/* Printing Check */
	int j;  
	for (j = 0; j < mid; j++) { 
		printf("Merged item: %d is %s", j, left[j].color);
	}

	/* Recursive implementation of mergeSort */

	mergeSort (left, target_col, low, mid); 
	mergeSort (right, target_col, counter - mid);
	merge (left, right, movies, mid, counter-mid, target_col);
	
	free(left); 
	free(right);
}

void merge (record * left, record * right, record * result, int lef, int rig, int sort_col) { 
	switch (sort_col) { 
		case 0: //color
			int ind = 0; 
			int i = 0;
			int j = 0; 
			while (i < lef && j < rig) { 
				if (strcasecmp(left[i].color, right[j].color) <= 0) { 
					result[ind] = left[i];
					ind++; 
					i++;
				}
				else { 
					result[ind] = right[j]; 
					ind++; 
					j++;
				}
			}
			while (i < lef) { 
				result[ind] = left[i];
				i++; 
				ind++;
			}
			while (j < rig) { 
				result[ind] = right[j];
				j++; 
				ind++;
			}
			i = 0; 
			while (i < ind) { 
				printf("merge: %dth is %s", i, result[i].color);
				i++;
			}
			break;
			
		/*
		case 1: //director_name
		case 2: //num_critic_for_reviews
		case 3: //duration
		case 4: //director_facebook_likes
		case 5: //actor_3_facebook_likes
		case 6: //actor_2_name
		case 7: //actor_1_facebook_likes
		case 8: //gross
		case 9: //genres
		case 10: //actor_1_name
		case 11: //movie_title
		case 12: //num_voted_users
		case 13: //cast_total_facebook_likes
		case 14: //actor_3_name
		case 15: //facenumber_in_poster
		case 16: //plot_keywords
		case 17: //movie_imdb_link
		case 18: //num_user_for_reviews
		case 19: //language
		case 20: //country
		case 21: //content_rating
		case 22: //budget
		case 23: //title_year
		case 24: //actor_2_facebook_likes
		case 25: //imdb_score
		case 26: //aspect_ratio
		case 27: //movie_facebook_likes
		*/
}
