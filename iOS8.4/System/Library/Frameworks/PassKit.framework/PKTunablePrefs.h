/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, UIView, UIWindow;

@interface PKTunablePrefs : NSObject {

	NSMutableDictionary* _prefs;
	UIView* _prefsContainerView;
	UIWindow* _window;

}

@property (assign,nonatomic) BOOL shouldShowUI; 
@property (retain) NSMutableDictionary * prefs;              //@synthesize prefs=_prefs - In the implementation block
@property (retain) UIView * prefsContainerView;              //@synthesize prefsContainerView=_prefsContainerView - In the implementation block
@property (retain) UIWindow * window;                        //@synthesize window=_window - In the implementation block
+(id)sharedPrefs;
-(NSMutableDictionary *)prefs;
-(void)setPrefs:(NSMutableDictionary *)arg1 ;
-(void)setPrefsContainerView:(UIView *)arg1 ;
-(BOOL)canShowUI;
-(void)didChangeOrientation:(id)arg1 ;
-(void)restore:(id)arg1 ;
-(void)layoutWindow;
-(UIView *)prefsContainerView;
-(void)toggleShouldShowUI:(id)arg1 ;
-(BOOL)shouldShowUI;
-(void)setShouldShowUI:(BOOL)arg1 ;
-(void)registerSliderPref:(id)arg1 default:(double)arg2 minimumValue:(double)arg3 maximumValue:(double)arg4 ;
-(void)registerSwitchPref:(id)arg1 default:(BOOL)arg2 ;
-(id)valueForPref:(id)arg1 ;
-(void)addObserver:(id)arg1 forPref:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)tripleTouchTapRecognizer;
-(void)dealloc;
-(UIWindow *)window;
-(id)init;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)save:(id)arg1 ;
@end
