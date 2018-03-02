//
//  IGCMacros.h
//  IGCMacros
//
//  Created by Jason Jon E. Carreos on 02/03/2018.
//

#ifndef IGCMacros_h
#define IGCMacros_h

#ifdef DEBUG
#define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define DLog(...)
#endif

#pragma mark - Initializers

/**
 Intializes a UIAlertControllerStyleActionSheet without any action(s).

 @param alertTitle Title of the alert.
 @param alertMessage Message of the alert.
 @return UIAlertController instance.
 */
#define ACTION_SHEET(alertTitle, alertMessage) [UIAlertController alertControllerWithTitle:(alertTitle) message:(alertMessage) preferredStyle:UIAlertControllerStyleActionSheet]
/**
 Initializes a UIAlertControllerStyleAlert without any action(s).

 @param alertTitle Title of the alert.
 @param alertMessage Message of the alert.
 @return UIAlertController instance.
 */
#define ALERT(alertTitle, alertMessage) [UIAlertController alertControllerWithTitle:(alertTitle) message:(alertMessage) preferredStyle:UIAlertControllerStyleAlert]
/**
 Initializes a UIFont instance given the provided parameters.

 @param fontName Font name/family to be initialized.
 @param fontSize Size of the font.
 @return UIFont instance.
 */
#define FONT(fontName, fontSize) [UIFont fontWithName:(fontName) size:(fontSize)]
/**
 Initializes a NSString with a given format.

 @param format String format.
 @param ... Arguments of the string.
 @return NSString instance.
 */
#define FORMAT(format, ...) [NSString stringWithFormat:(format), ##__VA_ARGS__]
/**
 Initializes a UIColor instanace based on provided hexstring.

 @param c Hexstring to base the color from.
 @param a Alpha value.
 @return UIColor instance.
 */
#define HEXCOLOR(c, a) [UIColor colorWithRed:(((c)>>16)&0xFF)/255.0 green:(((c)>>8)&0xFF)/255.0 blue:((c)&0xFF)/255.0 alpha:(a)]
/**
 Initializes a UIColor instanace based on provided hexstring. Has a default alpha value of 1.0.

 @param c Hexstring to base the color from.
 @return UIColor instance.
 */
#define HEXCOLOR(c) HEXCOLOR((c), 1.0)
/**
 Initializes a UIColor instanace based on provided red, green, and blue values.

 @param r Red value from 0-255.
 @param g Green value from 0-255.
 @param b Blue value from 0-255.
 @param a Alpha value.
 @return UIColor instance.
 */
#define RGBA(r, g, b, a) [UIColor colorWithRed:((r) / 255.0f) green:((g) / 255.0f) blue:((b) / 255.0f) alpha:(a)]
/**
 Initializes a UIColor instanace based on provided red, green, and blue values. Has a default value of 1.0.
 
 @param r Red value from 0-255.
 @param g Green value from 0-255.
 @param b Blue value from 0-255.
 @return UIColor instance.
 */
#define RGB(r, g, b) RGBA((r), (g), (b), 1.0)

/**
 Initialilzes a UIViewController instance with a given storyboard and its identifier.

 @param storyboard Name of the Storyboard file.
 @param identifier Identifier of desired View Controller Scene in Storyboard.
 @return UIViewController instance.
 */
#define STORYBOARD_CONTROLLER(storyboard, identifier) [[UIStoryboard storyboardWithName:(storyboard) bundle:nil] instantiateViewControllerWithIdentifier:(identifier)]
/**
 Initializes the Initial View Controller from provided storyboard.

 @param storyboard Name of the Storyboard file.
 @return UIViewController instance.
 */
#define STORYBOARD_CONTROLLER(storyboard) [[UIStoryboard storyboardWithName:(storyboard) bundle:nil] instantiateInitialViewController]

#pragma mark - Convenience

/**
 Convenience macro for `[UIApplication sharedApplication]`.
 */
#define APPLICATION [UIApplication sharedApplication]
/**
 Convenience macro for retrieving app's directory.
 */
#define DOCUMENTS_DIRECTORY [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject]
/**
 Convenience macro for `[NSBundle mainBundle]`.
 */
#define MAIN_BUNDLE [NSBundle mainBundle]
/**
 Convenience macro for `[NSNotificationCenter defaultCenter]`.
 */
#define NOTIFICATION_CENTER [NSNotificationCenter defaultCenter]
/**
 Register a .xib file to a UICollectionView.

 @param collection UICollectionView instance. The .xib identifier and cell's identifier should be the same.
 @param identifier Refers to the .xib file.
 */
#define REGISTER_COLLECTION_NIB(collection, identifier) [(collection) registerNib:[UINib nibWithNibName:(identifier) bundle:nil] forCellWithReuseIdentifier:(identifier)];
/**
 Register a .xib file to a UITableView.
 
 @param table UITableView instance. The .xib identifier and cell's identifier should be the same.
 @param identifier Refers to the .xib file.
 */
#define REGISTER_TABLE_NIB(table, identifier) [(table) registerNib:[UINib nibWithNibName:(identifier) bundle:nil] forCellReuseIdentifier:(identifier)];
/**
 Checks if device OS version is greater than or equal to provided version.

 @param v Version string to be compared to system.
 @return BOOL value related to condition.
 */
#define SYSTEM_VERSION_GREATERTHAN_OR_EQUALTO(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
/**
 Convenience macro for `[NSUserDefaults standardUserDefaults]`.
 */
#define USER_DEFAULTS [NSUserDefaults standardUserDefaults]

#pragma mark - Constants

/**
 Provides the needed calendar units for date.
 */
#define DATE_COMPONENTS NSYearCalendarUnit|NSMonthCalendarUnit|NSDayCalendarUnit
/**
 Provides the needed calendar units for time.
 */
#define TIME_COMPONENTS NSHourCalendarUnit|NSMinuteCalendarUnit|NSSecondCalendarUnit

/**
 Determines the current device's interface.
 */
#define IDIOM UI_USER_INTERFACE_IDIOM()
/**
 Determines if current device's interface is iPad.
 */
#define IS_IPAD (IDIOM == UIUserInterfaceIdiomPad)
/**
 Determines if current device's interface is iPhone.
 */
#define IS_IPHONE (IDIOM == UIUserInterfaceIdiomPhone)
/**
 Determines if current device's scale is Retina.
 */
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

/**
 Determines the current device's screen width.
 */
#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
/**
 Determines the current device's screen height.
 */
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)

#endif /* IGCMacros_h */
