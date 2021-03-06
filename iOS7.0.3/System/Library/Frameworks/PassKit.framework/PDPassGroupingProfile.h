/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface PDPassGroupingProfile : NSObject {

	NSString* _passTypeID;
	NSString* _groupingID;
	int _passStyle;
	NSDate* _relevantDate;
	NSDate* _ingestedDate;

}

@property (nonatomic,copy) NSString * passTypeID;                //@synthesize passTypeID=_passTypeID - In the implementation block
@property (nonatomic,copy) NSString * groupingID;                //@synthesize groupingID=_groupingID - In the implementation block
@property (assign,nonatomic) int passStyle;                      //@synthesize passStyle=_passStyle - In the implementation block
@property (nonatomic,retain) NSDate * relevantDate;              //@synthesize relevantDate=_relevantDate - In the implementation block
@property (nonatomic,retain) NSDate * ingestedDate;              //@synthesize ingestedDate=_ingestedDate - In the implementation block
-(id)passTypeID;
-(void)setPassTypeID:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(int)passStyle;
-(void)setGroupingID:(id)arg1 ;
-(void)setRelevantDate:(id)arg1 ;
-(void)setIngestedDate:(id)arg1 ;
-(id)groupingID;
-(id)relevantDate;
-(id)ingestedDate;
-(void)setPassStyle:(int)arg1 ;
@end

