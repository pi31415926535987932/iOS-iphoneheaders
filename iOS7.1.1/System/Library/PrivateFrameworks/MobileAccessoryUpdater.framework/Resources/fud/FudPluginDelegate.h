/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:19:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Resources/fud
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FudPluginDelegate <NSObject>
@optional
-(void)didFind:(BOOL)arg1 info:(id)arg2 updateAvailable:(BOOL)arg3 error:(id)arg4;

@required
-(void)logv:(int)arg1 format:(id)arg2 arguments:(void*)arg3;
-(void)progress:(double)arg1;
-(void)accessoryDisconnected:(id)arg1;
-(void)didBootstrap:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
-(void)didFind:(BOOL)arg1 info:(id)arg2 updateAvailable:(BOOL)arg3 needsDownload:(BOOL)arg4 error:(id)arg5;
-(void)didDownload:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
-(void)didPrepare:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
-(void)didApply:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
-(void)didFinish:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
-(void)log:(int)arg1 format:(id)arg2;
@end
