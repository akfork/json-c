/*
 * @file json_object_object_foreach.c
 *
 * @author Akagi201
 * @date 2014/09/05
 *
 * json_object_object_foreach test
 */

#include <json-c/json.h>
#include <stdio.h>

int main() {
	char *string = "{\"sitename\" : \"joys of programming\", \"tags\" : [ \"c\" , \"c++\", \"java\", \"PHP\" ], \"author-details\": { \"name\" : \"Joys of Programming\", \"Number of Posts\" : 10 }}";
	json_object *jobj = json_tokener_parse(string);
	enum json_type type;
	json_object_object_foreach(jobj, key, val) {
		printf("type: ", type);
		type = json_object_get_type(val);
		switch (type) {
		case json_type_null:
			printf("json_type_null\n");
			break;
		case json_type_boolean:
			printf("json_type_boolean\n");
			break;
		case json_type_double:
			printf("json_type_double\n");
			break;
		case json_type_int:
			printf("json_type_int\n");
			break;
		case json_type_object:
			printf("json_type_object\n");
			break;
		case json_type_array:
			printf("json_type_array\n");
			break;
		case json_type_string:
			printf("json_type_string\n");
			break;
		}
	}

	return 0;
}
