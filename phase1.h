#ifndef PHASE1_H
#define PHASE1_H

// ==========================================
// 1. Soil Physics and Moisture (فیزیک و رطوبت خاک)
// ==========================================

// رطوبت حجمی خاک
double calcVolumetricMoisture(double w, double rho_b);

// تخلخل کل خاک (برای استفاده در فرمول درصد اشباع)
double calcPorosity(double rho_b, double rho_s);

// درصد اشباع خاک
double calcSaturationPercentage(double vwc, double porosity);

// پتانسیل کل آب خاک
double calcTotalSoilWaterPotential(double psi_g, double psi_m, double psi_p, double psi_o);


// ==========================================
// 2. Meteorology and Evapotranspiration (هواشناسی و تبخیر-تعرق)
// ==========================================

// تبدیل انرژی تابشی به معادل عمق تبخیر
double calcRadiationEquivalentEvaporation(double R);

// فشار بخار اشباع در دمای T
double calcSaturationVaporPressure(double T);

// میانگین فشار بخار اشباع روزانه
double calcMeanDailySaturationVaporPressure(double t_max, double t_min);

// شیب منحنی فشار بخار اشباع
double calcVaporPressureCurveSlope(double T, double e_sat);

// ثابت سایکرومتریک
double calcPsychrometricConstant(double P);

// فشار بخار واقعی روزانه
double calcActualVaporPressure(double t_min, double t_max, double rh_min, double rh_max);

// اصلاح سرعت باد برای ارتفاع استاندارد 2 متری
double calcCorrectedWindSpeed(double u_z, double z);

// تبخیر-تعرق مرجع هارگریوز-سامانی (معمولی)
double calcHargreavesET0(double t_mean, double t_max, double t_min, double R_a);

// تبخیر-تعرق هارگریوز کالیبره محلی (اقلیم نیمه خشک سرد)
double calcHargreavesColdSemiArid(double t_mean, double t_max, double t_min, double R_a);

// تبخیر-تعرق هارگریوز کالیبره محلی (اقلیم نیمه خشک گرم)
double calcHargreavesWarmSemiArid(double t_mean, double t_max, double t_min, double R_a);


// ==========================================
// 3. Soil Water Balance & Irrigation (موازنه آب خاک و زمان‌بندی آبیاری)
// ==========================================

// کل آب قابل دسترس در ناحیه ریشه (TAW)
double calcTAW(double theta_fc, double theta_wp, double z_r);

// آب به راحتی قابل دسترس (RAW)
double calcRAW(double p, double taw);

// تعدیل ضریب تخلیه (p)
double calcAdjustedDepletionFraction(double p_table, double et_c);

// بیلان روزانه رطوبت خاک (کمبود رطوبت)
double calcDailyMoistureDeficit(double d_prev, double P_i, double RO_i, double I_i, double CR_i, double et_c_i, double DP_i);

// عمق تخلیه مجاز مدیریتی (MAD)
double calcManagementAllowedDepletion(double mad_percent, double awc, double d_rz);

// تلفات نفوذ عمقی روزانه
double calcDeepPercolation(double P_i, double RO_i, double I_i, double et_c_i, double d_prev);


// ==========================================
// 4. Stress and Yield Models (تنش‌های رطوبتی، شوری و عملکرد)
// ==========================================

// ضریب تنش آبی (کمبود رطوبت)
double calcWaterStressCoeff(double taw, double d_r, double p);

// مدل کاهش عملکرد در اثر شوری خاک (نسبت Ya به Ym)
double calcSalinityYieldReduction(double b, double ec_e, double ec_threshold);

// ضریب تنش در شرایط شوری تنها
double calcSalinityStressCoeff(double b, double k_y, double ec_e, double ec_threshold);

// ضریب تنش کل در شرایط همزمان تنش رطوبتی و شوری
double calcCombinedStressCoeff(double b, double k_y, double ec_e, double ec_threshold, double taw, double d_r, double p);

// برآورد هدایت الکتریکی عصاره اشباع بر اساس کسر آبشویی
double calcECeFromLeachingFraction(double ec_iw, double LF);

#endif // PHASE1_H