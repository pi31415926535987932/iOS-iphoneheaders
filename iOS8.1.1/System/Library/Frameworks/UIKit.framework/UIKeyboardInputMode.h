/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInputMode.h>
#import <UIKit/NSCopying.h>

@class NSString, NSArray, NSExtension, NSBundle;

@interface UIKeyboardInputMode : UITextInputMode <NSCopying> {

	BOOL isDisplayed;
	NSString* primaryLanguage;
	NSString* languageWithRegion;
	NSString* identifier;
	NSString* normalizedIdentifier;
	NSString* softwareLayout;
	NSString* hardwareLayout;

}

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,readonly) NSString * identifierWithLayouts; 
@property (nonatomic,retain) NSString * normalizedIdentifier; 
@property (nonatomic,retain) NSString * primaryLanguage; 
@property (nonatomic,retain) NSString * languageWithRegion; 
@property (nonatomic,retain) NSString * softwareLayout; 
@property (nonatomic,retain) NSString * hardwareLayout; 
@property (nonatomic,retain,readonly) NSArray * normalizedIdentifierLevels; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * extendedDisplayName; 
@property (nonatomic,readonly) BOOL isDefaultRightToLeft; 
@property (nonatomic,readonly) BOOL defaultLayoutIsASCIICapable; 
@property (nonatomic,readonly) BOOL isExtensionInputMode; 
@property (nonatomic,readonly) NSExtension * extension; 
@property (nonatomic,readonly) NSBundle * containingBundle; 
@property (nonatomic,readonly) NSString * containingBundleDisplayName; 
@property (assign,nonatomic) BOOL isDisplayed; 
+(id)keyboardInputModeWithIdentifier:(id)arg1 ;
+(id)dictationInputMode;
+(id)intlInputMode;
+(id)canonicalLanguageIdentifierFromIdentifier:(id)arg1 ;
+(id)softwareLayoutFromIdentifier:(id)arg1 ;
+(id)hardwareLayoutFromIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)hardwareLayout;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSExtension *)extension;
-(NSString *)identifierWithLayouts;
-(BOOL)isDisplayed;
-(BOOL)isExtensionInputMode;
-(BOOL)isDefaultRightToLeft;
-(BOOL)isAllowedForTraits:(id)arg1 ;
-(BOOL)defaultLayoutIsASCIICapable;
-(NSString *)primaryLanguage;
-(void)setPrimaryLanguage:(NSString *)arg1 ;
-(BOOL)isDesiredForTraits:(id)arg1 forceASCIICapable:(BOOL)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)displayName;
-(NSBundle *)containingBundle;
-(NSString *)languageWithRegion;
-(NSString *)normalizedIdentifier;
-(void)setNormalizedIdentifier:(NSString *)arg1 ;
-(void)setLanguageWithRegion:(NSString *)arg1 ;
-(void)setSoftwareLayout:(NSString *)arg1 ;
-(void)setHardwareLayout:(NSString *)arg1 ;
-(NSArray *)normalizedIdentifierLevels;
-(NSString *)extendedDisplayName;
-(NSString *)containingBundleDisplayName;
-(NSString *)softwareLayout;
-(void)setIsDisplayed:(BOOL)arg1 ;
@end
