/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol AXSettingsVoiceAssetManagerDelegate <NSObject>
@optional
-(void)assetManagerVoiceLanguageIsCompact:(id)arg1 compact:(BOOL)arg2 error:(id)arg3;
-(void)assetManagerVoiceLanguageIsDownloading:(id)arg1 downloading:(BOOL)arg2;
-(void)assetManagerVoiceLanguageIsDownloadingPaused:(id)arg1 paused:(BOOL)arg2;
-(void)assetManagerVoiceLanguageDownloadProgress:(id)arg1 progress:(float)arg2 storageSize:(long long)arg3;
-(void)assetManagerVoiceLanguageInProgressDownload:(id)arg1;
@end

