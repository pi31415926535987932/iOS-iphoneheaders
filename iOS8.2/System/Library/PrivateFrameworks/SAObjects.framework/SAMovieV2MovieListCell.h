/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, SAMovieV2MovieDetailSnippet, NSString, NSNumber, NSDate;

@interface SAMovieV2MovieListCell : SADomainObject

@property (nonatomic,copy) NSArray * displayableShowtimes; 
@property (nonatomic,retain) SAMovieV2MovieDetailSnippet * movieDetailSnippet; 
@property (nonatomic,copy) NSString * movieName; 
@property (nonatomic,copy) NSArray * posterImages; 
@property (nonatomic,copy) NSNumber * qualityRating; 
@property (nonatomic,copy) NSString * rating; 
@property (nonatomic,copy) NSDate * theatricalReleaseDate; 
+(id)movieListCell;
+(id)movieListCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setRating:(NSString *)arg1 ;
-(NSString *)rating;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSArray *)displayableShowtimes;
-(void)setDisplayableShowtimes:(NSArray *)arg1 ;
-(SAMovieV2MovieDetailSnippet *)movieDetailSnippet;
-(void)setMovieDetailSnippet:(SAMovieV2MovieDetailSnippet *)arg1 ;
-(NSString *)movieName;
-(void)setMovieName:(NSString *)arg1 ;
-(NSArray *)posterImages;
-(void)setPosterImages:(NSArray *)arg1 ;
-(NSNumber *)qualityRating;
-(void)setQualityRating:(NSNumber *)arg1 ;
-(NSDate *)theatricalReleaseDate;
-(void)setTheatricalReleaseDate:(NSDate *)arg1 ;
@end
