/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBIconModelPropertyListFileStore.h>

@interface SBDefaultIconModelStore : SBIconModelPropertyListFileStore
+(id)sharedInstance;
-(id)loadDesiredIconState:(id*)arg1 ;
-(id)loadCurrentIconState:(id*)arg1 ;
-(BOOL)deleteDesiredIconState:(id*)arg1 ;
-(BOOL)saveDesiredIconState:(id)arg1 error:(id*)arg2 ;
-(void)_deleteLegacyState;
-(id)init;
@end
