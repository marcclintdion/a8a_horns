GLuint paintSphere_INDICES[] = 
{
     //number of vertices = 2880

0,
1,
2,
3,
4,
5,
6,
7,
8,
9,
10,
11,
12,
13,
14,
15,
16,
17,
18,
19,
20,
21,
22,
23,
3,
24,
2,
25,
8,
5,
26,
11,
7,
27,
14,
10,
28,
20,
29,
16,
21,
30,
11,
31,
32,
10,
14,
33,
20,
34,
35,
30,
36,
37,
2,
38,
39,
5,
40,
41,
8,
7,
32,
11,
10,
42,
14,
13,
43,
44,
17,
37,
19,
45,
34,
23,
46,
36,
24,
41,
38,
8,
47,
40,
31,
48,
49,
33,
50,
51,
34,
52,
53,
37,
36,
54,
46,
55,
56,
40,
57,
58,
32,
49,
59,
31,
42,
51,
43,
60,
50,
61,
37,
62,
45,
63,
52,
46,
64,
54,
41,
58,
65,
47,
59,
57,
48,
66,
67,
50,
68,
69,
53,
52,
70,
62,
54,
71,
56,
72,
73,
58,
57,
74,
49,
67,
75,
51,
69,
66,
53,
76,
77,
62,
78,
79,
63,
80,
70,
64,
73,
71,
58,
81,
82,
59,
75,
74,
83,
84,
85,
86,
87,
88,
70,
89,
90,
78,
71,
91,
72,
92,
93,
81,
74,
94,
67,
95,
96,
83,
97,
88,
86,
98,
99,
78,
100,
101,
80,
102,
89,
73,
93,
91,
103,
104,
92,
74,
75,
96,
84,
105,
106,
87,
107,
108,
90,
89,
109,
100,
91,
110,
92,
111,
112,
113,
114,
115,
85,
106,
116,
88,
108,
105,
99,
117,
107,
100,
118,
119,
102,
120,
109,
91,
93,
112,
104,
121,
111,
114,
122,
116,
105,
123,
124,
107,
125,
126,
127,
109,
128,
118,
110,
129,
111,
130,
131,
132,
115,
133,
116,
106,
124,
108,
126,
123,
107,
117,
134,
118,
135,
136,
109,
120,
137,
112,
131,
129,
121,
138,
130,
116,
139,
133,
123,
140,
141,
126,
125,
142,
143,
128,
144,
129,
145,
146,
130,
147,
148,
149,
133,
150,
139,
124,
141,
123,
126,
151,
134,
152,
142,
136,
135,
146,
137,
153,
144,
131,
148,
145,
138,
154,
147,
139,
155,
150,
140,
156,
157,
142,
158,
159,
160,
161,
162,
145,
163,
164,
148,
147,
165,
166,
150,
167,
141,
157,
168,
140,
151,
159,
152,
162,
158,
169,
146,
164,
153,
170,
171,
148,
172,
163,
166,
173,
174,
155,
168,
167,
156,
175,
176,
159,
158,
177,
178,
171,
179,
163,
180,
181,
165,
182,
183,
173,
167,
184,
168,
157,
176,
159,
185,
175,
158,
162,
186,
164,
181,
187,
170,
188,
179,
172,
183,
180,
173,
189,
190,
167,
168,
191,
175,
192,
193,
177,
194,
195,
179,
196,
197,
180,
198,
199,
182,
200,
201,
189,
184,
202,
176,
193,
203,
175,
185,
195,
186,
204,
194,
181,
199,
205,
188,
206,
196,
183,
201,
198,
207,
208,
200,
191,
203,
202,
192,
209,
210,
194,
211,
212,
197,
196,
213,
198,
214,
215,
201,
200,
216,
217,
202,
218,
193,
210,
219,
192,
195,
212,
204,
220,
211,
199,
215,
221,
196,
206,
222,
201,
223,
214,
208,
224,
216,
203,
219,
218,
209,
225,
226,
211,
227,
228,
213,
229,
230,
214,
231,
232,
216,
233,
234,
235,
236,
237,
210,
226,
238,
209,
212,
228,
220,
239,
227,
221,
215,
232,
222,
240,
229,
223,
234,
231,
235,
241,
242,
243,
244,
237,
245,
246,
247,
228,
227,
248,
229,
249,
250,
231,
251,
252,
242,
253,
254,
241,
237,
255,
256,
247,
257,
245,
258,
259,
230,
250,
260,
232,
252,
261,
229,
240,
262,
234,
263,
251,
241,
264,
253,
244,
257,
255,
246,
265,
266,
267,
268,
269,
250,
249,
270,
251,
271,
272,
253,
273,
274,
264,
255,
275,
247,
266,
276,
246,
259,
269,
250,
277,
278,
252,
272,
279,
262,
280,
270,
263,
281,
271,
264,
282,
273,
255,
257,
276,
265,
283,
284,
268,
285,
286,
270,
287,
288,
271,
289,
290,
273,
291,
292,
282,
275,
293,
266,
284,
294,
265,
269,
286,
277,
288,
295,
272,
290,
296,
270,
280,
297,
271,
281,
298,
282,
299,
291,
276,
294,
293,
283,
300,
301,
285,
302,
303,
287,
304,
305,
289,
306,
307,
291,
308,
309,
299,
293,
310,
284,
301,
311,
283,
286,
303,
288,
305,
312,
290,
307,
313,
287,
297,
314,
315,
292,
309,
299,
316,
308,
294,
311,
310,
300,
317,
318,
303,
302,
319,
304,
320,
321,
306,
322,
323,
309,
308,
324,
316,
310,
325,
301,
318,
326,
300,
303,
327,
305,
321,
328,
307,
323,
329,
314,
330,
320,
331,
309,
332,
316,
333,
324,
311,
326,
325,
317,
334,
335,
328,
336,
337,
320,
338,
339,
322,
340,
341,
332,
324,
342,
333,
325,
343,
318,
335,
344,
317,
327,
345,
321,
339,
336,
323,
341,
346,
330,
347,
338,
332,
348,
349,
333,
350,
342,
325,
326,
344,
334,
351,
352,
336,
353,
354,
339,
338,
355,
341,
340,
356,
348,
342,
357,
350,
343,
358,
335,
352,
359,
334,
345,
360,
339,
361,
353,
341,
362,
363,
338,
347,
364,
365,
366,
356,
350,
367,
357,
343,
344,
359,
351,
368,
369,
353,
370,
371,
355,
372,
373,
362,
356,
374,
375,
376,
377,
378,
379,
380,
352,
369,
381,
382,
354,
371,
361,
373,
370,
363,
362,
383,
355,
364,
384,
385,
377,
386,
378,
387,
376,
358,
359,
381,
388,
389,
390,
370,
391,
392,
373,
372,
393,
374,
394,
395,
376,
396,
397,
387,
380,
398,
399,
390,
400,
401,
371,
392,
370,
373,
402,
383,
395,
403,
384,
404,
393,
377,
397,
405,
387,
406,
396,
380,
407,
400,
389,
408,
409,
391,
410,
411,
393,
412,
413,
394,
414,
415,
397,
396,
416,
406,
398,
417,
400,
390,
409,
418,
392,
411,
402,
413,
410,
395,
415,
419,
393,
404,
420,
405,
397,
421,
406,
422,
416,
400,
423,
417,
408,
424,
425,
411,
410,
426,
412,
427,
428,
414,
429,
430,
416,
431,
432,
422,
417,
433,
409,
425,
434,
435,
411,
436,
413,
428,
426,
419,
415,
430,
412,
420,
437,
421,
432,
438,
422,
439,
431,
417,
423,
434,
424,
440,
441,
426,
442,
443,
427,
444,
445,
438,
446,
447,
431,
448,
449,
439,
433,
450,
425,
441,
451,
424,
452,
453,
428,
445,
442,
430,
454,
455,
437,
456,
444,
432,
449,
446,
439,
457,
448,
434,
451,
450,
440,
458,
459,
443,
442,
460,
445,
444,
461,
462,
463,
464,
448,
465,
466,
457,
450,
467,
441,
459,
468,
440,
453,
469,
445,
470,
460,
455,
454,
464,
456,
471,
461,
449,
466,
472,
457,
473,
465,
451,
468,
467,
458,
474,
475,
460,
476,
477,
461,
478,
479,
463,
480,
481,
466,
465,
482,
473,
467,
483,
459,
475,
484,
485,
486,
477,
470,
479,
476,
487,
464,
481,
471,
488,
478,
466,
489,
490,
473,
491,
482,
468,
484,
483,
474,
492,
493,
476,
494,
495,
478,
496,
497,
481,
480,
498,
489,
482,
499,
491,
483,
500,
484,
475,
493,
501,
477,
495,
479,
497,
494,
502,
481,
503,
478,
488,
504,
489,
505,
506,
491,
507,
499,
484,
508,
500,
509,
510,
511,
494,
512,
513,
497,
496,
514,
498,
515,
516,
505,
499,
517,
507,
500,
518,
519,
511,
520,
509,
521,
522,
497,
523,
512,
524,
503,
516,
504,
525,
514,
506,
505,
526,
507,
527,
517,
500,
508,
528,
510,
529,
530,
531,
532,
533,
514,
534,
535,
515,
536,
537,
517,
538,
539,
540,
541,
542,
511,
530,
543,
510,
522,
533,
512,
523,
535,
544,
516,
537,
514,
525,
545,
546,
547,
536,
540,
548,
549,
520,
543,
542,
529,
550,
551,
532,
552,
553,
534,
554,
555,
537,
536,
556,
557,
549,
558,
548,
542,
559,
530,
551,
560,
529,
533,
553,
535,
555,
561,
562,
537,
563,
545,
564,
554,
536,
547,
565,
548,
566,
558,
543,
560,
559,
18,
567,
19,
568,
15,
44,
568,
44,
61,
19,
567,
45,
568,
61,
569,
45,
567,
63,
568,
569,
79,
63,
567,
80,
568,
79,
101,
80,
567,
102,
568,
101,
119,
102,
567,
120,
568,
119,
136,
120,
567,
137,
568,
136,
169,
137,
567,
153,
568,
169,
570,
153,
567,
170,
568,
570,
187,
170,
567,
188,
568,
187,
205,
188,
567,
206,
568,
205,
221,
206,
567,
222,
568,
221,
571,
222,
567,
240,
568,
571,
261,
240,
567,
262,
568,
261,
279,
262,
567,
280,
568,
279,
296,
280,
567,
297,
568,
296,
313,
297,
567,
314,
568,
313,
329,
314,
567,
330,
568,
329,
346,
330,
567,
347,
568,
346,
363,
347,
567,
364,
568,
363,
572,
364,
567,
384,
568,
572,
403,
384,
567,
404,
568,
403,
419,
404,
567,
420,
568,
419,
573,
420,
567,
437,
568,
573,
455,
437,
567,
456,
568,
455,
487,
456,
567,
471,
568,
487,
502,
471,
567,
488,
568,
502,
524,
488,
567,
504,
568,
524,
544,
504,
567,
525,
568,
544,
562,
525,
567,
545,
568,
562,
574,
545,
567,
564,
550,
26,
6,
552,
27,
9,
568,
574,
15,
554,
28,
575,
563,
556,
21,
564,
567,
18,
576,
558,
1,
566,
559,
4,
551,
6,
25,
553,
9,
26,
555,
575,
577,
574,
563,
16,
564,
18,
28,
556,
565,
22,
558,
566,
3,
559,
560,
25,
578,
0,
2,
24,
3,
5,
25,
6,
8,
26,
9,
11,
27,
12,
14,
44,
15,
17,
28,
18,
20,
30,
21,
23,
1,
3,
2,
4,
25,
5,
6,
26,
7,
9,
27,
10,
575,
28,
29,
17,
16,
30,
7,
11,
32,
42,
10,
33,
29,
20,
35,
17,
30,
37,
578,
2,
39,
24,
5,
41,
47,
8,
32,
31,
11,
42,
33,
14,
43,
61,
44,
37,
20,
19,
34,
30,
23,
36,
2,
24,
38,
5,
8,
40,
32,
31,
49,
42,
33,
51,
35,
34,
53,
62,
37,
54,
64,
46,
56,
41,
40,
58,
47,
32,
59,
48,
31,
51,
33,
43,
50,
569,
61,
62,
34,
45,
52,
36,
46,
54,
38,
41,
65,
40,
47,
57,
49,
48,
67,
51,
50,
69,
76,
53,
70,
78,
62,
71,
64,
56,
73,
81,
58,
74,
59,
49,
75,
48,
51,
66,
579,
53,
77,
569,
62,
79,
52,
63,
70,
54,
64,
71,
65,
58,
82,
57,
59,
74,
580,
83,
85,
97,
86,
88,
76,
70,
90,
100,
78,
91,
73,
72,
93,
581,
81,
94,
75,
67,
96,
84,
83,
88,
87,
86,
99,
79,
78,
101,
70,
80,
89,
71,
73,
91,
72,
103,
92,
94,
74,
96,
85,
84,
106,
88,
87,
108,
127,
90,
109,
118,
100,
110,
93,
92,
112,
132,
113,
115,
122,
85,
116,
84,
88,
105,
87,
99,
107,
101,
100,
119,
89,
102,
109,
110,
91,
112,
92,
104,
111,
115,
114,
116,
106,
105,
124,
108,
107,
126,
143,
127,
128,
135,
118,
129,
112,
111,
131,
149,
132,
133,
139,
116,
124,
105,
108,
123,
125,
107,
134,
119,
118,
136,
128,
109,
137,
110,
112,
129,
111,
121,
130,
115,
116,
133,
124,
123,
141,
151,
126,
142,
582,
143,
144,
135,
129,
146,
131,
130,
148,
166,
149,
150,
155,
139,
141,
140,
123,
151,
125,
134,
142,
169,
136,
146,
128,
137,
144,
129,
131,
145,
130,
138,
147,
133,
139,
150,
141,
140,
157,
151,
142,
159,
152,
160,
162,
146,
145,
164,
172,
148,
165,
173,
166,
167,
155,
141,
168,
156,
140,
159,
142,
152,
158,
570,
169,
164,
144,
153,
171,
145,
148,
163,
583,
166,
174,
150,
155,
167,
157,
156,
176,
185,
159,
177,
584,
178,
179,
164,
163,
181,
172,
165,
183,
189,
173,
184,
191,
168,
176,
156,
159,
175,
177,
158,
186,
570,
164,
187,
171,
170,
179,
163,
172,
180,
174,
173,
190,
184,
167,
191,
176,
175,
193,
185,
177,
195,
584,
179,
197,
181,
180,
199,
183,
182,
201,
217,
189,
202,
191,
176,
203,
192,
175,
195,
177,
186,
194,
187,
181,
205,
179,
188,
196,
180,
183,
198,
182,
207,
200,
184,
191,
202,
193,
192,
210,
195,
194,
212,
585,
197,
213,
199,
198,
215,
223,
201,
216,
586,
217,
218,
203,
193,
219,
209,
192,
212,
194,
204,
211,
205,
199,
221,
213,
196,
222,
198,
201,
214,
200,
208,
216,
202,
203,
218,
210,
209,
226,
212,
211,
228,
585,
213,
230,
215,
214,
232,
223,
216,
234,
241,
235,
237,
219,
210,
238,
225,
209,
228,
211,
220,
227,
571,
221,
232,
213,
222,
229,
214,
223,
231,
587,
235,
242,
236,
243,
237,
256,
245,
247,
588,
228,
248,
230,
229,
250,
232,
231,
252,
589,
242,
254,
264,
241,
255,
244,
256,
257,
246,
245,
259,
590,
230,
260,
571,
232,
261,
249,
229,
262,
231,
234,
251,
242,
241,
253,
237,
244,
255,
247,
246,
266,
259,
267,
269,
277,
250,
270,
252,
251,
272,
254,
253,
274,
282,
264,
275,
257,
247,
276,
265,
246,
269,
260,
250,
278,
261,
252,
279,
249,
262,
270,
251,
263,
271,
253,
264,
273,
275,
255,
276,
266,
265,
284,
269,
268,
286,
277,
270,
288,
272,
271,
290,
274,
273,
292,
299,
282,
293,
276,
266,
294,
283,
265,
286,
278,
277,
295,
279,
272,
296,
287,
270,
297,
289,
271,
298,
273,
282,
291,
275,
276,
293,
284,
283,
301,
286,
285,
303,
288,
287,
305,
290,
289,
307,
292,
291,
309,
316,
299,
310,
294,
284,
311,
300,
283,
303,
295,
288,
312,
296,
290,
313,
304,
287,
314,
331,
315,
309,
291,
299,
308,
293,
294,
310,
301,
300,
318,
327,
303,
319,
305,
304,
321,
307,
306,
323,
332,
309,
324,
333,
316,
325,
311,
301,
326,
317,
300,
327,
312,
305,
328,
313,
307,
329,
304,
314,
320,
591,
331,
332,
308,
316,
324,
310,
311,
325,
318,
317,
335,
592,
328,
337,
321,
320,
339,
323,
322,
341,
348,
332,
342,
350,
333,
343,
326,
318,
344,
334,
317,
345,
328,
321,
336,
329,
323,
346,
320,
330,
338,
591,
332,
349,
324,
333,
342,
343,
325,
344,
335,
334,
352,
337,
336,
354,
361,
339,
355,
362,
341,
356,
593,
348,
357,
367,
350,
358,
344,
335,
359,
351,
334,
360,
336,
339,
353,
346,
341,
363,
355,
338,
364,
340,
365,
356,
342,
350,
357,
358,
343,
359,
352,
351,
369,
354,
353,
371,
361,
355,
373,
383,
362,
374,
385,
375,
377,
387,
378,
380,
359,
352,
381,
401,
382,
371,
353,
361,
370,
572,
363,
383,
372,
355,
384,
594,
385,
386,
375,
378,
376,
595,
358,
381,
399,
388,
390,
371,
370,
392,
402,
373,
393,
383,
374,
395,
377,
376,
397,
406,
387,
398,
407,
399,
400,
418,
401,
392,
391,
370,
402,
572,
383,
403,
372,
384,
393,
386,
377,
405,
376,
387,
396,
398,
380,
400,
390,
389,
409,
392,
391,
411,
402,
393,
413,
395,
394,
415,
421,
397,
416,
422,
406,
417,
423,
400,
409,
435,
418,
411,
391,
402,
410,
403,
395,
419,
412,
393,
420,
596,
405,
421,
396,
406,
416,
398,
400,
417,
409,
408,
425,
436,
411,
426,
413,
412,
428,
415,
414,
430,
421,
416,
432,
439,
422,
433,
423,
409,
434,
597,
435,
436,
410,
413,
426,
573,
419,
430,
427,
412,
437,
596,
421,
438,
416,
422,
431,
433,
417,
434,
425,
424,
441,
436,
426,
443,
428,
427,
445,
598,
438,
447,
432,
431,
449,
457,
439,
450,
434,
425,
451,
440,
424,
453,
426,
428,
442,
573,
430,
455,
427,
437,
444,
438,
432,
446,
431,
439,
448,
433,
434,
450,
441,
440,
459,
486,
443,
460,
470,
445,
461,
454,
462,
464,
449,
448,
466,
473,
457,
467,
451,
441,
468,
458,
440,
469,
442,
445,
460,
487,
455,
464,
444,
456,
461,
446,
449,
472,
448,
457,
465,
450,
451,
467,
459,
458,
475,
486,
460,
477,
470,
461,
479,
464,
463,
481,
489,
466,
482,
491,
473,
483,
468,
459,
484,
501,
485,
477,
460,
470,
476,
502,
487,
481,
461,
471,
478,
472,
466,
490,
465,
473,
482,
467,
468,
483,
475,
474,
493,
477,
476,
495,
479,
478,
497,
503,
481,
498,
505,
489,
499,
507,
491,
500,
508,
484,
493,
599,
501,
495,
476,
479,
494,
524,
502,
503,
496,
478,
504,
490,
489,
506,
482,
491,
499,
483,
484,
500,
519,
509,
511,
495,
494,
513,
523,
497,
514,
503,
498,
516,
526,
505,
517,
527,
507,
518,
600,
519,
520,
510,
509,
522,
494,
497,
512,
544,
524,
516,
496,
504,
514,
601,
506,
526,
499,
507,
517,
518,
500,
528,
511,
510,
530,
522,
531,
533,
523,
514,
535,
516,
515,
537,
526,
517,
539,
548,
540,
542,
520,
511,
543,
529,
510,
533,
602,
512,
535,
562,
544,
537,
534,
514,
545,
515,
546,
536,
603,
540,
549,
541,
520,
542,
530,
529,
551,
533,
532,
553,
535,
534,
555,
563,
537,
556,
576,
557,
558,
566,
548,
559,
543,
530,
560,
550,
529,
553,
602,
535,
561,
574,
562,
563,
534,
545,
554,
556,
536,
565,
549,
548,
558,
542,
543,
559,
551,
550,
6,
553,
552,
9,
555,
554,
575,
16,
563,
21,
0,
576,
1,
3,
566,
4,
560,
551,
25,
550,
553,
26,
561,
555,
577,
15,
574,
16,
554,
564,
28,
21,
556,
22,
1,
558,
3,
4,
559,
25,
};
