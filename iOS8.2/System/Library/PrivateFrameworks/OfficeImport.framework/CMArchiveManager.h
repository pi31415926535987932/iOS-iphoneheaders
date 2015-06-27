/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/TCCancelDelegate.h>

@class NSString, NSMutableDictionary, NSMutableSet, NSCache;

@interface CMArchiveManager : NSObject <TCCancelDelegate> {

	char mIsThumbnail;
	char mIsOnPhone;
	unsigned mPageCount;
	NSString* mPassphrase;
	NSMutableDictionary* mDrawableCache;
	NSString* mResourcePathPrefix;
	NSMutableSet* mPausedPaths;
	int mHeight;
	int mWidth;
	float mCommitInterval;
	char mAutoCommit;
	NSCache* mStyleObjectCache;

}

@property (copy) NSString * passphrase; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resourceTypeToExtension:(int)arg1 ;
+(int)blipTypeToResourceType:(int)arg1 ;
+(id)resourceTypeToMIME:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isCancelled;
-(unsigned)pageCount;
-(void)setPageCount:(unsigned)arg1 ;
-(void)setHTMLWidth:(int)arg1 ;
-(void)setHTMLHeight:(int)arg1 ;
-(void)pushText:(id)arg1 toPath:(id)arg2 ;
-(void)pushCssToPath:(id)arg1 ;
-(void)commitDataAtPath:(id)arg1 ;
-(void)closeResourceAtPath:(id)arg1 ;
-(char)isOnPhone;
-(char)progressiveMappingIsPausedOnPath:(id)arg1 ;
-(void)pauseProgressiveMappingOnPath:(id)arg1 ;
-(void)restartProgressiveMappingOnPath:(id)arg1 ;
-(void)setIsOnPhone:(char)arg1 ;
-(char)isThumbnail;
-(void)setIsThumbnail:(char)arg1 ;
-(id)copyResourceWithName:(id)arg1 ;
-(id)copyResourceWithType:(int)arg1 ;
-(void)pushData:(id)arg1 toPath:(id)arg2 ;
-(id)addResource:(id)arg1 withType:(int)arg2 ;
-(id)addCssStyle:(id)arg1 ;
-(void)setCommitInterval:(float)arg1 ;
-(void)setAutoCommit:(char)arg1 ;
-(id)_validateData:(id)arg1 withType:(int*)arg2 ;
-(id)addResource:(id)arg1 withName:(id)arg2 ;
-(id)addResourceForDrawable:(id)arg1 withType:(int)arg2 drawable:(id)arg3 ;
-(id)cachedPathForDrawable:(id)arg1 ;
-(unsigned)resourceCount;
-(void)addCssStyle:(id)arg1 withName:(id)arg2 ;
-(id)cssStylesheetString;
-(void)setResourcePathPrefix:(id)arg1 ;
-(id)resourcePathPrefix;
-(id)appendResourcePathToName:(id)arg1 ;
-(char)isProgressive;
-(NSString *)passphrase;
-(void)setPassphrase:(NSString *)arg1 ;
-(id)addStyle:(id)arg1 ;
@end
