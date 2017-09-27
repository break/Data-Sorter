#ifndef SORTER_H
#define SORTER_H

typedef struct movie { 
	char * color; 
	char * director_name; 
	int num_critic_for_reviews; 
	int duration; 
	int director_FB_likes;
	int actor_3_FB_likes;
	char * actor_2_name; 
	int actor_1_FB_likes; 
	long gross; 
	char * genres; //Can have multiple: separated by | 
	char * actor_1_name; 
	char * movie_title; 
	long num_voted_users; 
	int total_num_FB_likes;
	char * actor_3_name;
	int facenumber;
	char * movie_IMDB_link;
	int num_user_for_reviews;
	char * language; 
	char * country; 
	char * content_rating;
	long budget; 
	int year; 
	int actor_2_FB_likes;
	double imdb_score; 
	double aspect_ratio; 
	int movie_FB_likes;
} currMovie; 

#endif 
