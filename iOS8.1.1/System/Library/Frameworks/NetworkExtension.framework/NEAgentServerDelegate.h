/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NEAgentServerDelegate
@required
-(id)initWithServer:(id)arg1 pluginType:(id)arg2 primaryPluginType:(id)arg3 pluginBundle:(CFBundleRef)arg4;
-(BOOL)handleInit;
-(void)handleDisposeWithCompletionHandler:(/*^block*/id)arg1;
-(void)handleMessage:(id)arg1 withOuterMessage:(id)arg2;

@end

